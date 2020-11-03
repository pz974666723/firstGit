class Solution {
public:
    char *mat = 0;
    int x = 0, y = 0;
    int str_len = 0;
    int dirx[4] = {-1, 0, 1, 0}, diry[4] = {0, 1, 0, -1};
    
    bool dfs(int i, int j, int pos, char *str){
        //边界判断
        if (i<0 || i>=x || j<0 || j>=y) return false;
        char ch = mat[i*y + j];
        if(ch!=str[pos] || ch=='#') return false;//'#'为访问过的标记
        if(pos == str_len-1) return true;//最后一个位置匹配
        mat[i*y + j] = '#';//标记为访问过
        //开始回溯
        for(int k=0; k<4; ++k){
            if(dfs(i+dirx[k], j+diry[k], pos+1, str)) return true;
        }
        //回溯失败
        mat[i*y + j] = ch;
        // 说明此次匹配是不成功的
        return false; 
    }
    
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        mat = matrix;
        x = rows, y = cols;
        str_len = strlen(str);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (dfs(i, j, 0, str)) {
                    return true;
                }
            }
        }
        return false;
    }


};