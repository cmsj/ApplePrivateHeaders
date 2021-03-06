/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDNDList : NSObject
+(id)sharedList;
-(void)dealloc;
-(id)init;
-(id)currentList;
-(void)_handleChatGroupIDDidChangeNotification:(id)arg1 ;
-(id)groupHashForChat:(id)arg1 ;
-(id)unmuteDateForChat:(id)arg1 ;
-(id)unmuteDateForIdentifier:(id)arg1 ;
-(id)groupHashForHandleIDs:(id)arg1 ;
-(id)dndIdentifiersForChat:(id)arg1 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 syncToPairedDevice:(char)arg3 ;
-(void)muteChat:(id)arg1 usingIdentifier:(id)arg2 untilDate:(id)arg3 syncToPairedDevice:(char)arg4 ;
-(void)syncToPairedDeviceIncludingVersion:(char)arg1 ;
-(void)_updateGroupID:(id)arg1 toGroupID:(id)arg2 forChat:(id)arg3 ;
-(char)isMutedChat:(id)arg1 ;
-(char)isMutedChatIdentifier:(id)arg1 handleIDs:(id)arg2 style:(unsigned char)arg3 isSMS:(char)arg4 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 ;
-(void)_handleDNDListChanged;
@end

