/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <Foundation/NSCoder.h>

@class NSArray;

@interface NEHasher : NSCoder {

	CC_SHA1state_st* _sha1Context;
	NSArray* _classPrefixWhitelist;

}

@property (assign) CC_SHA1state_st* sha1Context;                //@synthesize sha1Context=_sha1Context - In the implementation block
@property (retain) NSArray * classPrefixWhitelist;              //@synthesize classPrefixWhitelist=_classPrefixWhitelist - In the implementation block
+(id)hashObject:(id)arg1 ;
+(id)hashObject:(id)arg1 withClassPrefixWhitelist:(id)arg2 ;
-(id)finishHashing;
-(void)setClassPrefixWhitelist:(NSArray *)arg1 ;
-(void)setSha1Context:(CC_SHA1state_st*)arg1 ;
-(NSArray *)classPrefixWhitelist;
-(void)dealloc;
-(id)init;
-(char)allowsKeyedCoding;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(char)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(char)containsValueForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(id)decodePropertyListForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(char)decodeBoolForKey:(id)arg1 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(int)decodeIntForKey:(id)arg1 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)decodeDataObject;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)encodePoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeRect:(CGRect)arg1 forKey:(id)arg2 ;
-(CGPoint)decodePointForKey:(id)arg1 ;
-(CGSize)decodeSizeForKey:(id)arg1 ;
-(CGRect)decodeRectForKey:(id)arg1 ;
-(CC_SHA1state_st*)sha1Context;
@end
