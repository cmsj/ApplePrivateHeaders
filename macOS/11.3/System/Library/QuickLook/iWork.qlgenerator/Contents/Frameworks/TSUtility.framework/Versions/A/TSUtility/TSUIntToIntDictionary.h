/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
+(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)keyEnumerator;
-(char)containsKey:(long long)arg1 ;
-(id)allKeys;
-(id)allValues;
-(CFDictionaryRef)p_cfDictionary;
-(long long)intForKey:(long long)arg1 ;
-(void)setInt:(long long)arg1 forKey:(long long)arg2 ;
-(char)intIsPresentForKey:(long long)arg1 outValue:(long long*)arg2 ;
-(void)removeIntForKey:(long long)arg1 ;
-(void)removeAllInts;
-(void)applyFromIntToIntDictionary:(id)arg1 ;
-(id)arrayOfBoxedKeys;
-(void)enumerateKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)incrementValueBy:(long long)arg1 forKey:(long long)arg2 ;
-(void)incrementValueForKey:(long long)arg1 ;
-(void)addIntToIntDictionary:(id)arg1 ;
@end
