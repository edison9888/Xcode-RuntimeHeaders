/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class SKNode;

#pragma mark Named Structures

struct CGPath;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct FSEventStreamContext {
    long long version;
    void *info;
    void *retain;
    void *release;
    void *copyDescription;
};

struct NodeMovePair;

struct PolyEditor {
    struct CGPath *_path;
    _Bool _dirty;
    struct CGPoint _continuityButtonPos;
    struct CGPoint _lockButtonPos;
    unsigned long long _editIndex;
    int _editPart;
    _Bool _filled;
    _Bool _closed;
    _Bool _smoothPath;
    struct vector<PolyEditor::Vertex, std::__1::allocator<PolyEditor::Vertex>> _verts;
    SKNode *_offsetNode;
    struct CGPoint _lastOffsetPosition;
    struct Vertex _firstVert;
};

struct Vertex {
    struct CGPoint point;
    struct CGPoint tangentIn;
    struct CGPoint tangentOut;
    int tangency;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct vector<NodeMovePair, std::__1::allocator<NodeMovePair>> {
    struct NodeMovePair *__begin_;
    struct NodeMovePair *__end_;
    struct __compressed_pair<NodeMovePair *, std::__1::allocator<NodeMovePair>> {
        struct NodeMovePair *__first_;
    } __end_cap_;
};

struct vector<PolyEditor::Vertex, std::__1::allocator<PolyEditor::Vertex>> {
    struct Vertex *__begin_;
    struct Vertex *__end_;
    struct __compressed_pair<PolyEditor::Vertex *, std::__1::allocator<PolyEditor::Vertex>> {
        struct Vertex *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    struct CGPoint _field5;
    struct CGPoint _field6;
    struct CGPoint _field7;
    struct CGPoint _field8;
    struct CGPoint _field9;
    struct CGPoint _field10;
    struct CGPoint _field11;
    double _field12;
    struct CGPoint _field13;
    struct CGSize _field14;
    struct CGPoint _field15;
    struct CGPoint _field16;
    struct CGPoint _field17;
    struct CGPoint _field18;
} CDStruct_76845b71;

