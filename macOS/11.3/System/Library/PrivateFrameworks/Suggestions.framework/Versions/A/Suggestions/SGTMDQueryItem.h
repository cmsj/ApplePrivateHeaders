/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGTSearchQueryResultItem.h>

@class NSArray, NSMutableDictionary, NSString;

@interface SGTMDQueryItem : NSObject <SGTSearchQueryResultItem> {

	NSMutableDictionary* _attributesAndValues;
	NSArray* _matchingAttributes;

}

@property (retain) NSArray * matchingAttributes;                    //@synthesize matchingAttributes=_matchingAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)valueForAttribute:(id)arg1 ;
-(void)setValue:(id)arg1 forAttribute:(id)arg2 ;
-(NSArray *)matchingAttributes;
-(void)setMatchingAttributes:(NSArray *)arg1 ;
@end

