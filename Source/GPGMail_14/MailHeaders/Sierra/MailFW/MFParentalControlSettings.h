//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray;

@interface MFParentalControlSettings : NSObject
{
}

+ (BOOL)isEmail:(id)arg1 inEmailList:(id)arg2;	// IMP=0x00000000002097cf
+ (id)sharedInstance;	// IMP=0x0000000000209081
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000208fc7
@property(readonly, nonatomic) double parentalControlEnabledTimeIntervalSince1970;
- (id)rejectEmails:(id)arg1;	// IMP=0x000000000020a71b
- (BOOL)_rejectEmail:(id)arg1;	// IMP=0x000000000020a5b5
- (id)approveEmails:(id)arg1;	// IMP=0x000000000020a3f5
- (BOOL)_approveEmail:(id)arg1;	// IMP=0x000000000020a1b2
- (id)_dictionaryFromEmail:(id)arg1;	// IMP=0x000000000020a084
- (BOOL)haveEmailsBeenApproved:(id)arg1 unapprovedOnes:(id)arg2;	// IMP=0x0000000000209ea0
- (BOOL)hasEmailBeenApproved:(id)arg1;	// IMP=0x0000000000209dfe
- (id)_approvedEmails;	// IMP=0x0000000000209d9f
- (BOOL)_isSelfEmail:(id)arg1;	// IMP=0x0000000000209bcc
- (BOOL)isParentEmail:(id)arg1;	// IMP=0x0000000000209b55
@property(readonly, copy) NSArray *parentEmails;
@property(readonly) BOOL isParentalControlEnabled;
- (void)_approveEmailListChanged:(id)arg1;	// IMP=0x0000000000209999
- (void)_defaultsDidChange;	// IMP=0x0000000000209901
- (void)_reallyHandleDefaultsChange;	// IMP=0x00000000002098e2
- (void)_updateCachedDataForEnabledState:(BOOL)arg1 approvedList:(BOOL)arg2 postNotification:(BOOL)arg3;	// IMP=0x0000000000209390
- (void)dealloc;	// IMP=0x000000000020924d
- (id)init;	// IMP=0x00000000002091a1

@end

