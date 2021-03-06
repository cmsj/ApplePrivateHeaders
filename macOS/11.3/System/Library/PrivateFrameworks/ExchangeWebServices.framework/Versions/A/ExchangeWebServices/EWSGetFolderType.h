/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSFolderResponseShapeType, NSArray;

@interface EWSGetFolderType : EWSBaseRequestType {

	EWSFolderResponseShapeType* _FolderShape;
	NSArray* _FolderIds;

}

@property (nonatomic,retain) EWSFolderResponseShapeType * FolderShape;              //@synthesize FolderShape=_FolderShape - In the implementation block
@property (nonatomic,copy) NSArray * FolderIds;                                     //@synthesize FolderIds=_FolderIds - In the implementation block
+(id)definition;
-(void)setFolderShape:(EWSFolderResponseShapeType *)arg1 ;
-(void)setFolderIds:(NSArray *)arg1 ;
-(NSArray *)FolderIds;
-(EWSFolderResponseShapeType *)FolderShape;
@end

