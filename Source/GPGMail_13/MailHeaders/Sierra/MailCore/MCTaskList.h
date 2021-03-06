//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray, NSDictionary;

@interface MCTaskList : NSObject
{
    id <MCTaskListDelegate> _delegate;	// 8 = 0x8
    NSArray *_sortingKeys;	// 16 = 0x10
    NSDictionary *_listsByKey;	// 24 = 0x18
    NSDictionary *_comparatorsByKey;	// 32 = 0x20
}

+ (CDUnknownBlockType)_newComparatorForKey:(id)arg1;	// IMP=0x00000000000a87e5
@property(readonly, copy, nonatomic) NSDictionary *comparatorsByKey; // @synthesize comparatorsByKey=_comparatorsByKey;
@property(readonly, copy, nonatomic) NSDictionary *listsByKey; // @synthesize listsByKey=_listsByKey;
@property(readonly, copy, nonatomic) NSArray *sortingKeys; // @synthesize sortingKeys=_sortingKeys;
@property(nonatomic) __weak id <MCTaskListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000000000a939f
- (void)_insertTask:(id)arg1 intoListWithKey:(id)arg2;	// IMP=0x00000000000a9205
- (void)_extractTask:(id)arg1 fromListWithKey:(id)arg2;	// IMP=0x00000000000a9150
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000a8ffe
- (void)enumerateTasksForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a8f4c
- (id)copyOfListForKey:(id)arg1;	// IMP=0x00000000000a8ea2
- (id)highestPriorityTaskForKey:(id)arg1;	// IMP=0x00000000000a8dfa
@property(readonly, nonatomic) unsigned long long taskCount;
- (void)removeTask:(id)arg1;	// IMP=0x00000000000a8b50
- (void)addTask:(id)arg1;	// IMP=0x00000000000a895e
- (void)dealloc;	// IMP=0x00000000000a85bc
- (id)description;	// IMP=0x00000000000a852e
- (id)init;	// IMP=0x00000000000a845f
- (id)initWithSortingKeys:(id)arg1;	// IMP=0x00000000000a80e0

@end

