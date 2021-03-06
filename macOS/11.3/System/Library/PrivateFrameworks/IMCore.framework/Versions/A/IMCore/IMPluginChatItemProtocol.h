/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IMBalloonPluginDataSource;


@protocol IMPluginChatItemProtocol <NSObject>
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IMBalloonPluginDataSource * dataSource; 
@property (nonatomic,readonly) char isFromMe; 
@required
-(NSString *)type;
-(IMBalloonPluginDataSource *)dataSource;
-(char)isFromMe;

@end

