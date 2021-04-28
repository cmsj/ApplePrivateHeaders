/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDLogEventDailyProvider.h>

@protocol HMDStereoPairDailyCountProviderContext;
@class NSArray, NSString;

@interface HMDStereoPairDailyCountProvider : NSObject <HMDLogEventDailyProvider> {

	id<HMDStereoPairDailyCountProviderContext> _context;

}

@property (readonly) id<HMDStereoPairDailyCountProviderContext> context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * logEventProviderDailySubmissionBlocks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(id<HMDStereoPairDailyCountProviderContext>)context;
-(NSArray *)logEventProviderDailySubmissionBlocks;
-(void)submitLogEvent;
-(unsigned long long)smallHomePodPairCount;
@end
