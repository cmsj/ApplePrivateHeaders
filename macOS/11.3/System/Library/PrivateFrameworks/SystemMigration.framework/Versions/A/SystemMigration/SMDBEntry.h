/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SystemMigration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface SMDBEntry : NSObject <NSCopying, NSCoding> {

	NSMutableDictionary* dictionaryRepresentation;

}
+(id)DSKeyForNativeKey:(id)arg1 ;
+(id)nativeKeyForDSKey:(id)arg1 ;
+(id)DSRecordTypeForNativeRecordType:(id)arg1 ;
+(id)nativeRecordTypeForDSRecordType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)attributes;
-(id)dictionaryRepresentation;
-(id)dataForKey:(id)arg1 ;
-(id)metaDataForKey:(id)arg1 ;
-(void)_setDictionaryRep:(id)arg1 ;
-(id)convertEntry:(id)arg1 toClass:(Class)arg2 ;
-(void)convertRecordDictionary:(id)arg1 fromClass:(Class)arg2 ;
-(void)deleteKey:(id)arg1 forMetaType:(char)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 forMetaType:(char)arg3 ;
-(void)replaceValue:(id)arg1 withNewValue:(id)arg2 ;
@end
