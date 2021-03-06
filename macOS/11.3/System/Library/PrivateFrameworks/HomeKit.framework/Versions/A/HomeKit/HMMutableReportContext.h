/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMReportContext.h>

@class NSString;

@interface HMMutableReportContext : HMReportContext

@property (nonatomic,retain) NSString * reportDomain; 
@property (nonatomic,retain) NSString * reportIdentifier; 
@property (assign,nonatomic) double reportTimeout; 
+(id)reportContextWithDomain:(id)arg1 identifier:(id)arg2 timeout:(double)arg3 ;
+(id)reportContextWithDomain:(id)arg1 identifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithReportDomain:(id)arg1 identifier:(id)arg2 timeout:(double)arg3 ;
@end

