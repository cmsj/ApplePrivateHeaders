/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Suggestions/Suggestions-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSDictionary;

@interface _SGTLegacySpotlightItemDictionary : NSDictionary {

	MDQueryRef query;
	long long index;
	NSDictionary* collectedAttributes;

}
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)allKeys;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)valueForAttribute:(id)arg1 ;
-(id)initWithQuery:(MDQueryRef)arg1 ;
@end
