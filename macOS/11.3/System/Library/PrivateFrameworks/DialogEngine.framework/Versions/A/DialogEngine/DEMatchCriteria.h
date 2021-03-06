/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSArray;

@interface DEMatchCriteria : NSObject {

	NSArray* _prefixes;
	NSArray* _suffixes;

}

@property (nonatomic,retain) NSArray * prefixes;              //@synthesize prefixes=_prefixes - In the implementation block
@property (nonatomic,retain) NSArray * suffixes;              //@synthesize suffixes=_suffixes - In the implementation block
+(id)matchCriteriaFromPb:(const MatchCriteria*)arg1 ;
+(void)matchCriteriaToPb:(id)arg1 matchCriteriaPb:(MatchCriteria*)arg2 ;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(NSArray *)prefixes;
-(char)any:(id)arg1 ;
-(NSArray *)suffixes;
-(void)setSuffixes:(NSArray *)arg1 ;
-(void)setPrefixes:(NSArray *)arg1 ;
-(char)all:(id)arg1 ;
-(id)initWithPrefixes:(id)arg1 suffixes:(id)arg2 ;
@end

