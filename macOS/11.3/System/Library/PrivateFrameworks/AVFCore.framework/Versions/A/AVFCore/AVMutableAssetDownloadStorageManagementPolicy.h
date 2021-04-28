/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetDownloadStorageManagementPolicy.h>

@class NSString, NSDate;

@interface AVMutableAssetDownloadStorageManagementPolicy : AVAssetDownloadStorageManagementPolicy

@property (nonatomic,copy) NSString * priority; 
@property (nonatomic,copy) NSDate * expirationDate; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)priority;
@end
