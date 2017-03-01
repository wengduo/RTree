#include <stdio.h>

typedef struct _RTNode
{
    int partition[MAX+1];
    int total;
    int taken[MAX+1];   //记录是否已经分配了父节点
    int minfill;        //节点最小满足状态
    int count[2];       //两个父节点中子节点的个数
    RTreembr cover[2];
    RealType area[2];   //面积
} RTNode;
RTreeBranch BranchBuf[MAX+1];
int BranchCount;        //分支总数
RTreembr CoverSplit;
RTreeType CoverSplitArea;
RTNode Paritions[METHODS];
RTreembr rects[];

int RTreeInsertRect(RTreembr *rc,int tid,RTree **root,int level)
{
    int i;
    RTree *newnode;
    RTreeBranch b;
    assert(rc && root);
    assert(level >= 0 && level <= (*root)->level);
    for(i = 0;i < DimsNum;i++) 
    {
        assert(rc->bound[i] <= rc->bound[DimsNumb+i]);
 
    }
    if(_RTreeInsertRect(rc,tid,*root,&newnode,level))
    {

        newroot = RTreeNewNode();
	newroot->level = (*root)->level+1;
	b.mbr = RTreeNodeCover(*root);
	b.child = *root;
	RTreeAddBranch(&b,newroot,NULL);
	b.child = newnode;
	*root = newroot;
	return 1;
    }
    return 0;
}

static int _RTreeInsertRect(RTreembr *rc,int tid,RTree *node,RTree **newNode,int level)
{
    int i;
    RTreeBranch b;
    RTree *n2;
    assert(rc && node && newNode);

}


int main() {


    return 0;
}
