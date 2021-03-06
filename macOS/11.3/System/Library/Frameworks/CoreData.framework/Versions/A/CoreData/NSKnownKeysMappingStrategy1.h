/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysMappingStrategy.h>

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {

	int _cd_rc;
	int _reserved64;
	void* _table;
	unsigned long long _length;
	id _reserved1;
	id* _keys;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)alloc;
+(char)supportsSecureCoding;
+(Class)classForKeyedUnarchiver;
+(char)accessInstanceVariablesDirectly;
-(id)initForKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS12*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allKeys;
-(unsigned long long)indexForKey:(id)arg1 ;
-(id*)keys;
-(unsigned long long)fastIndexForKnownKey:(id)arg1 ;
-(id)initForKeys:(id)arg1 ;
@end

