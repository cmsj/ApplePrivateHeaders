/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface TSCERemoteDataValueMap : NSObject <NSCopying> {

	unordered_map<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>>>* _coldDataByYear;
	NSMutableDictionary* _data;

}

@property (nonatomic,retain) NSMutableDictionary * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long count; 
+(id)valueMap;
+(id)valueMapWithSpecifier:(id)arg1 value:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)count;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSMutableDictionary *)data;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeAllValues;
-(void)saveToArchive:(RemoteDataValueMapArchive*)arg1 ;
-(id)initFromArchive:(const RemoteDataValueMapArchive*)arg1 ;
-(void)p_enumerateYearMapsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateSpecifiersAndValuesWithBlock:(/*^block*/id)arg1 ;
-(char)containsValueForSpecifier:(id)arg1 ;
-(id)valueForSpecifier:(id)arg1 ;
-(void)setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)p_saveMap:(id)arg1 toArchive:(RemoteDataValueMapArchive*)arg2 ;
-(void)removeValueForSpecifier:(id)arg1 ;
-(void)addValuesFromMap:(id)arg1 ;
-(id)updateWithValuesFromMap:(id)arg1 overwriteValues:(char)arg2 ;
-(void)removeValuesForSpecifierSet:(id)arg1 ;
-(char)containsValueForAllSpecifiersInSet:(id)arg1 ;
-(id)mapForSpecifiersInSet:(id)arg1 ;
-(id)mapForSingleSpecifier:(id)arg1 ;
-(id)allSpecifiers;
@end

