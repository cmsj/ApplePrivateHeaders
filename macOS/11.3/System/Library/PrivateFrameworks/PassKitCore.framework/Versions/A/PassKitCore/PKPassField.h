/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PKPassField : NSObject <NSSecureCoding, NSCopying> {

	NSString* _value;
	long long _type;
	NSString* _key;
	NSString* _label;
	id _unformattedValue;
	NSString* _changeMessage;
	long long _textAlignment;
	long long _cellStyle;
	long long _unitType;
	NSString* _link;
	unsigned long long _row;
	unsigned long long _dataDetectorTypes;
	NSDictionary* _semantics;
	long long _foreignReferenceType;
	NSString* _foreignReferenceIdentifier;

}

@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * key;                                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * label;                                     //@synthesize label=_label - In the implementation block
@property (__weak,readonly) NSString * value; 
@property (nonatomic,copy) NSString * link;                                      //@synthesize link=_link - In the implementation block
@property (assign,nonatomic) unsigned long long row;                             //@synthesize row=_row - In the implementation block
@property (nonatomic,copy) id unformattedValue;                                  //@synthesize unformattedValue=_unformattedValue - In the implementation block
@property (nonatomic,copy) NSString * changeMessage;                             //@synthesize changeMessage=_changeMessage - In the implementation block
@property (assign,nonatomic) long long textAlignment;                            //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long dataDetectorTypes;               //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * semantics;                             //@synthesize semantics=_semantics - In the implementation block
@property (assign,nonatomic) long long cellStyle;                                //@synthesize cellStyle=_cellStyle - In the implementation block
@property (assign,nonatomic) long long foreignReferenceType;                     //@synthesize foreignReferenceType=_foreignReferenceType - In the implementation block
@property (nonatomic,retain) NSString * foreignReferenceIdentifier;              //@synthesize foreignReferenceIdentifier=_foreignReferenceIdentifier - In the implementation block
@property (assign,nonatomic) long long unitType;                                 //@synthesize unitType=_unitType - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)value;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(unsigned long long)row;
-(void)setTextAlignment:(long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(long long)textAlignment;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)link;
-(long long)unitType;
-(id)asDictionary;
-(id)unformattedValue;
-(void)setChangeMessage:(NSString *)arg1 ;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(void)setSemantics:(NSDictionary *)arg1 ;
-(void)setCellStyle:(long long)arg1 ;
-(void)setForeignReferenceType:(long long)arg1 ;
-(void)setUnitType:(long long)arg1 ;
-(void)setForeignReferenceIdentifier:(NSString *)arg1 ;
-(void)setRow:(unsigned long long)arg1 ;
-(NSString *)changeMessage;
-(NSDictionary *)semantics;
-(long long)cellStyle;
-(long long)foreignReferenceType;
-(void)setUnformattedValue:(id)arg1 ;
-(void)flushCachedValue;
-(NSString *)foreignReferenceIdentifier;
@end

