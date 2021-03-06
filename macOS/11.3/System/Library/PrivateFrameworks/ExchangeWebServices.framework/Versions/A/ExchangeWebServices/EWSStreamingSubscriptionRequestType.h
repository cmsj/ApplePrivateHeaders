/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class NSArray, NSString;

@interface EWSStreamingSubscriptionRequestType : NSObject <XSDefinitionProvider> {

	char _SubscribeToAllFolders;
	char _SubscribeToAllFoldersIsSpecified;
	NSArray* _FolderIds;
	NSArray* _EventTypes;

}

@property (assign,setter=ubscribeToAllFolders,nonatomic) char SubscribeToAllFolders;                                    //@synthesize SubscribeToAllFolders=_SubscribeToAllFolders - In the implementation block
@property (assign,setter=ubscribeToAllFoldersIsSpecified,nonatomic) char SubscribeToAllFoldersIsSpecified;              //@synthesize SubscribeToAllFoldersIsSpecified=_SubscribeToAllFoldersIsSpecified - In the implementation block
@property (nonatomic,copy) NSArray * FolderIds;                                                                         //@synthesize FolderIds=_FolderIds - In the implementation block
@property (nonatomic,copy) NSArray * EventTypes;                                                                        //@synthesize EventTypes=_EventTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(NSString *)description;
-(void)setEventTypes:(NSArray *)arg1 ;
-(void)setFolderIds:(NSArray *)arg1 ;
-(NSArray *)FolderIds;
-(char)SubscribeToAllFolders;
-(void)setSubscribeToAllFolders:(char)arg1 ;
-(char)SubscribeToAllFoldersIsSpecified;
-(void)setSubscribeToAllFoldersIsSpecified:(char)arg1 ;
-(NSArray *)EventTypes;
@end

