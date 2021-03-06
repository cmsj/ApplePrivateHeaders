/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, GCPhysicalInputProfile;


@protocol GCDevice <NSObject>
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue; 
@property (nonatomic,copy,readonly) NSString * vendorName; 
@property (nonatomic,readonly) NSString * productCategory; 
@property (nonatomic,readonly) GCPhysicalInputProfile * physicalInputProfile; 
@required
-(NSString *)vendorName;
-(NSString *)productCategory;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setHandlerQueue:(id)arg1;
-(GCPhysicalInputProfile *)physicalInputProfile;

@end

