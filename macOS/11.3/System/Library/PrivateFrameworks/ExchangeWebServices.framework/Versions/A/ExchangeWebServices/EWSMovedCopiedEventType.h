/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseObjectChangedEventType.h>

@class EWSFolderIdType;

@interface EWSMovedCopiedEventType : EWSBaseObjectChangedEventType {

	id _OldItemOrFolderId;
	EWSFolderIdType* _OldParentFolderId;

}

@property (nonatomic,retain) id OldItemOrFolderId;                             //@synthesize OldItemOrFolderId=_OldItemOrFolderId - In the implementation block
@property (nonatomic,retain) EWSFolderIdType * OldParentFolderId;              //@synthesize OldParentFolderId=_OldParentFolderId - In the implementation block
+(id)definition;
-(id)OldItemOrFolderId;
-(void)setOldItemOrFolderId:(id)arg1 ;
-(EWSFolderIdType *)OldParentFolderId;
-(void)setOldParentFolderId:(EWSFolderIdType *)arg1 ;
@end

