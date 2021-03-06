/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class FCFeedRange, NSString;

@interface FCFeedTransformationClamp : NSObject <FCFeedTransforming> {

	FCFeedRange* _feedRange;

}

@property (nonatomic,retain) FCFeedRange * feedRange;               //@synthesize feedRange=_feedRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithDateRange:(id)arg1 ;
+(id)transformationWithFeedRange:(id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(FCFeedRange *)feedRange;
@end

