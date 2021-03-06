/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class NSData, NSNumber, NSString;

@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {

	unsigned _generationID;
	NSData* _signature;

}

@property (nonatomic,readonly) NSNumber * fsGenerationID; 
@property (nonatomic,readonly) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * generationIDString; 
@property (nonatomic,readonly) const char* UTF8String; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)newFromSqliteValue:(sqlite3_valueRef)arg1 ;
+(id)newFromSqliteStatement:(sqlite3_stmtRef)arg1 atIndex:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(const char*)UTF8String;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)signature;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(NSNumber *)fsGenerationID;
-(id)initWithRelativePath:(id)arg1 ;
-(id)initWithFSGenerationID:(unsigned)arg1 ;
-(char)isEqualToFSGenerationID:(unsigned)arg1 ;
-(char)isEqualToGenerationID:(id)arg1 orSignature:(id)arg2 ;
-(NSString *)generationIDString;
-(id)initWithSignature:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

