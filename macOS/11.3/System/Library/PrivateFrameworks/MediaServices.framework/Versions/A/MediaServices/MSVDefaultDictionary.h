/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSMutableDictionary;

@interface MSVDefaultDictionary : NSMutableDictionary {

	/*^block*/id _defaultValue;
	NSMutableDictionary* _storage;

}

@property (nonatomic,copy) id defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
+(id)dictionaryWithDictionary:(id)arg1 defaultValue:(/*^block*/id)arg2 ;
+(id)dictionaryWithDefaultValue:(/*^block*/id)arg1 ;
+(id)dictionaryWithCapacity:(unsigned long long)arg1 defaultValue:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(id)initWithDefaultValue:(/*^block*/id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 defaultValue:(/*^block*/id)arg2 ;
-(id)initWithDictionary:(id)arg1 defaultValue:(/*^block*/id)arg2 ;
@end
