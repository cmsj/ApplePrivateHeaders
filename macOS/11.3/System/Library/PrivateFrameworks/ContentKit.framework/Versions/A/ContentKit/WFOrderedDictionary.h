/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSOrderedSet, NSDictionary;

@interface WFOrderedDictionary : NSDictionary {

	NSOrderedSet* _keys;
	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSOrderedSet * keys;                    //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(Class)classForCoder;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allKeys;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(NSDictionary *)dictionary;
-(NSOrderedSet *)keys;
-(id)initWithQueryItems:(id)arg1 ;
@end

