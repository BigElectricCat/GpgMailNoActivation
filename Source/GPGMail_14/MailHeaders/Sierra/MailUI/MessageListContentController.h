//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCMessageDataSource.h"
#import "MessageListContentProviderDelegate.h"

@class MFLibraryStore, MessageListContentProvider, NSArray, NSDictionary, NSPredicate, NSString;

@interface MessageListContentController : NSObject <MessageListContentProviderDelegate, MCMessageDataSource>
{
    BOOL _includeDeleted;	// 8 = 0x8
    BOOL _isInThreadedMode;	// 9 = 0x9
    BOOL _useLibraryIDNumbering;	// 10 = 0xa
    NSArray *_selectedMailboxes;	// 16 = 0x10
    NSArray *_expandedSelectedMailboxes;	// 24 = 0x18
    NSArray *_orderedObjects;	// 32 = 0x20
    NSDictionary *_originalMessageByMessageID;	// 40 = 0x28
    NSDictionary *_messageCopiesByMessageID;	// 48 = 0x30
    MFLibraryStore *_searchStore;	// 56 = 0x38
    BOOL _allMessagesLoaded;	// 64 = 0x40
    BOOL _inSearchMode;	// 65 = 0x41
    BOOL _wasPreviouslyOrderedAscending;	// 66 = 0x42
    BOOL _wasPreviouslyInThreadedMode;	// 67 = 0x43
    BOOL _wasPreviouslyIncludingDeleted;	// 68 = 0x44
    BOOL _isSortedAscending;	// 69 = 0x45
    BOOL _displayingToColumn;	// 70 = 0x46
    id <MessageListContentControllerDelegate> _delegate;	// 72 = 0x48
    MessageListContentProvider *_provider;	// 80 = 0x50
    MessageListContentProvider *_bufferedProvider;	// 88 = 0x58
    long long _activeSearchField;	// 96 = 0x60
    long long _activeSearchTarget;	// 104 = 0x68
    NSString *_lastQueryStringFragment;	// 112 = 0x70
    NSArray *_previouslySelectedMailboxes;	// 120 = 0x78
    NSString *_previousSortOrder;	// 128 = 0x80
    NSPredicate *_previousFilterPredicate;	// 136 = 0x88
    NSString *_sortOrder;	// 144 = 0x90
    NSString *_secondarySortOrder;	// 152 = 0x98
    NSPredicate *_primitiveFilterPredicate;	// 160 = 0xa0
    unsigned long long _totalMessageCount;	// 168 = 0xa8
}

+ (id)expandedMailboxes:(id)arg1;	// IMP=0x00000001001fe996
+ (void)initialize;	// IMP=0x00000001001fe76e
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(retain, nonatomic) NSPredicate *primitiveFilterPredicate; // @synthesize primitiveFilterPredicate=_primitiveFilterPredicate;
@property(nonatomic) BOOL displayingToColumn; // @synthesize displayingToColumn=_displayingToColumn;
@property(nonatomic) BOOL isSortedAscending; // @synthesize isSortedAscending=_isSortedAscending;
@property(copy, nonatomic) NSString *secondarySortOrder; // @synthesize secondarySortOrder=_secondarySortOrder;
@property(copy, nonatomic) NSString *sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) BOOL wasPreviouslyIncludingDeleted; // @synthesize wasPreviouslyIncludingDeleted=_wasPreviouslyIncludingDeleted;
@property(nonatomic) BOOL wasPreviouslyInThreadedMode; // @synthesize wasPreviouslyInThreadedMode=_wasPreviouslyInThreadedMode;
@property(nonatomic) BOOL wasPreviouslyOrderedAscending; // @synthesize wasPreviouslyOrderedAscending=_wasPreviouslyOrderedAscending;
@property(retain, nonatomic) NSPredicate *previousFilterPredicate; // @synthesize previousFilterPredicate=_previousFilterPredicate;
@property(copy, nonatomic) NSString *previousSortOrder; // @synthesize previousSortOrder=_previousSortOrder;
@property(retain, nonatomic) NSArray *previouslySelectedMailboxes; // @synthesize previouslySelectedMailboxes=_previouslySelectedMailboxes;
@property(copy, nonatomic) NSString *lastQueryStringFragment; // @synthesize lastQueryStringFragment=_lastQueryStringFragment;
@property(nonatomic) long long activeSearchTarget; // @synthesize activeSearchTarget=_activeSearchTarget;
@property(nonatomic) long long activeSearchField; // @synthesize activeSearchField=_activeSearchField;
@property(retain, nonatomic) MessageListContentProvider *bufferedProvider; // @synthesize bufferedProvider=_bufferedProvider;
@property(retain, nonatomic) MessageListContentProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) BOOL inSearchMode; // @synthesize inSearchMode=_inSearchMode;
@property(nonatomic) BOOL allMessagesLoaded; // @synthesize allMessagesLoaded=_allMessagesLoaded;
@property(nonatomic) __weak id <MessageListContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100203e88
- (unsigned long long)sizeForMessage:(id)arg1;	// IMP=0x0000000100203b0f
- (long long)messageFlagsForMessage:(id)arg1 size:(unsigned long long *)arg2 appliedFlagColors:(id *)arg3;	// IMP=0x0000000100203ac0
- (id)originalOfMessage:(id)arg1;	// IMP=0x0000000100203a56
- (id)messagesIncludingHiddenCopies:(id)arg1;	// IMP=0x0000000100203a24
- (id)threadForMessage:(id)arg1;	// IMP=0x0000000100203a1c
- (BOOL)messageIsPartOfAThread:(id)arg1;	// IMP=0x0000000100203a14
- (id)parentOfMessage:(id)arg1;	// IMP=0x0000000100203a0c
- (id)repliesToMessage:(id)arg1;	// IMP=0x0000000100203a04
- (void)messageListContentProviderConversationsUpdated:(id)arg1;	// IMP=0x000000010020396b
- (void)messageListContentProviderDidFinishLoading:(id)arg1;	// IMP=0x000000010020388f
- (void)messageListContentProvider:(id)arg1 didFinishTaskWithInfo:(id)arg2 taskID:(id)arg3;	// IMP=0x0000000100203033
- (void)getIndexesOfMessages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100202fab
- (void)closeAllThreads;	// IMP=0x0000000100202f6e
- (void)openAllThreads;	// IMP=0x0000000100202f31
- (void)closeThread:(id)arg1 selectThread:(BOOL)arg2;	// IMP=0x0000000100202e5d
- (void)openThread:(id)arg1;	// IMP=0x0000000100202da0
- (BOOL)needTo;	// IMP=0x0000000100202d39
- (void)toggleThreadedMode;	// IMP=0x0000000100202cbb
@property(nonatomic) BOOL isInThreadedMode;
@property(readonly, nonatomic) BOOL isInThreadedModeExcludingSearch;
@property(readonly, nonatomic) BOOL isStillSearching;
- (id)uniquedString:(id)arg1;	// IMP=0x0000000100202af9
- (void)flushAllCaches;	// IMP=0x00000001002029ee
- (void)invalidateMessage:(id)arg1;	// IMP=0x00000001002028e3
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001002027d8
- (id)routeMessages:(id)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(id)arg3;	// IMP=0x00000001002026d2
- (void)doCompact;	// IMP=0x00000001002025c7
- (id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3;	// IMP=0x00000001002024c1
- (BOOL)undeleteMessages:(id)arg1;	// IMP=0x00000001002023bb
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;	// IMP=0x00000001002022b0
- (void)saveSnippetsForMessages:(id)arg1;	// IMP=0x00000001002021a5
- (id)snippetsForMessages:(id)arg1;	// IMP=0x000000010020209f
@property(readonly, nonatomic) BOOL supportsSnippets;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;	// IMP=0x0000000100201e8e
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;	// IMP=0x0000000100201d88
- (id)attachmentsDirectoryForMessage:(id)arg1;	// IMP=0x0000000100201c82
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x0000000100201b77
- (id)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;	// IMP=0x0000000100201a71
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;	// IMP=0x0000000100201966
- (void)setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x000000010020185b
- (void)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x0000000100201750
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x000000010020164a
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x000000010020153f
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;	// IMP=0x0000000100201439
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x0000000100201333
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 allowPartial:(BOOL)arg4;	// IMP=0x000000010020122d
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x0000000100201127
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;	// IMP=0x0000000100201021
- (id)messageForMessageID:(id)arg1;	// IMP=0x0000000100200f1b
@property(readonly, nonatomic) id <MCMailbox> mailbox;
@property(readonly, nonatomic) id <MCMailAccount> account;
@property(readonly) BOOL isReadOnly;
@property(readonly, copy, nonatomic) NSArray *searchScopeMailboxes;
@property(readonly, copy, nonatomic) NSArray *expandedSelectedMailboxesAllowingSearch;
@property(readonly, copy, nonatomic) NSArray *expandedSelectedMailboxes;
@property(readonly, copy, nonatomic) NSArray *selectedMailboxes;
@property(readonly, copy, nonatomic) NSArray *allMailboxes;
@property(readonly, nonatomic) MFLibraryStore *searchStore;
@property(readonly, copy, nonatomic) NSArray *stores;
- (id)_storesToRebuild;	// IMP=0x00000001002005e9
- (void)rebuildTableOfContentsAsynchronously;	// IMP=0x00000001002004b7
@property(readonly, nonatomic) BOOL canRebuild;
@property(readonly, nonatomic) BOOL canCompact;
- (void)unhideMessages:(id)arg1;	// IMP=0x00000001002001d2
- (void)hideMessages:(id)arg1 selectingNextMessage:(id)arg2 withAnimationOptions:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010020012d
@property(readonly, nonatomic) unsigned long long unreadCount;
- (void)setMailboxes:(id)arg1 sortOrder:(id)arg2 isSortedAscending:(BOOL)arg3 isInThreadedMode:(BOOL)arg4 includeDeleted:(BOOL)arg5 initialViewingState:(id)arg6 filterPredicate:(id)arg7;	// IMP=0x00000001001ffcbb
@property(retain, nonatomic) NSPredicate *filterPredicate;
- (BOOL)isSortedByDateReceived;	// IMP=0x00000001001ffbbe
@property(nonatomic) BOOL includeDeleted;
- (void)setSortOrder:(id)arg1 ascending:(BOOL)arg2 viewingState:(id)arg3;	// IMP=0x00000001001ff93c
@property(readonly, nonatomic) BOOL selectionIncludesSmartMailbox;
@property(readonly, copy, nonatomic) NSArray *openThreads;
- (id)orderedObjectsInRange:(struct _NSRange)arg1;	// IMP=0x00000001001ff7c6
@property(readonly, copy, nonatomic) NSArray *orderedObjects;
- (id)orderedObjectsAtIndexes:(id)arg1;	// IMP=0x00000001001ff794
- (id)objectInOrderedObjectsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001ff737
@property(readonly, nonatomic) unsigned long long countOfOrderedObjects;
- (BOOL)supportsSearching;	// IMP=0x00000001001ff712
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001ff707
- (BOOL)shouldShowRecipientForMailboxes:(id)arg1;	// IMP=0x00000001001ff5a3
- (id)criterionForAttachmentType:(id)arg1;	// IMP=0x00000001001ff515
- (id)queryStringFragmentFromSuggestions:(id)arg1;	// IMP=0x00000001001ff2f4
- (void)searchForSuggestions:(id)arg1 in:(long long)arg2 withOptions:(long long)arg3 fromSuggestionsSearchField:(id)arg4 isInThreadedMode:(BOOL)arg5 viewingState:(id)arg6 filterPredicate:(id)arg7;	// IMP=0x00000001001ff0ee
- (void)clearPreviousQueryString;	// IMP=0x00000001001ff0da
- (void)_searchForCriterion:(id)arg1 isInThreadedMode:(BOOL)arg2 viewingState:(id)arg3 filterPredicate:(id)arg4;	// IMP=0x00000001001fed52
- (void)clearSearchWithViewingState:(id)arg1;	// IMP=0x00000001001fec49
- (void)unregisterForNotifications;	// IMP=0x00000001001fe959
- (id)init;	// IMP=0x00000001001fe7e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end

