/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface VMUScanOverlay : NSObject {

	NSMutableArray* _rules;

}

@property (nonatomic,readonly) NSArray * refinementRules;              //@synthesize rules=_rules - In the implementation block
+(id)defaultOverlayWithScanner:(id)arg1 ;
+(id)defaultOverlay;
-(id)initWithScanner:(id)arg1 ;
-(void)addMetadataRefinementRule:(/*^block*/id)arg1 ;
-(NSArray *)refinementRules;
@end

