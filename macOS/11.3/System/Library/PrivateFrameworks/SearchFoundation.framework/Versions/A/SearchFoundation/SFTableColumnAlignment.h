/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFTableColumnAlignment.h>
@class NSDictionary, NSData;


@protocol SFTableColumnAlignment <NSObject>
@property (assign,nonatomic) int columnAlignment; 
@property (assign,nonatomic) int dataAlignment; 
@property (assign,nonatomic) char isEqualWidth; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setColumnAlignment:(int)arg1;
-(void)setDataAlignment:(int)arg1;
-(void)setIsEqualWidth:(char)arg1;
-(int)columnAlignment;
-(int)dataAlignment;
-(char)isEqualWidth;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface SFTableColumnAlignment : NSObject <SFTableColumnAlignment, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	char _isEqualWidth;
	int _columnAlignment;
	int _dataAlignment;

}

@property (assign,nonatomic) int columnAlignment;                                    //@synthesize columnAlignment=_columnAlignment - In the implementation block
@property (assign,nonatomic) int dataAlignment;                                      //@synthesize dataAlignment=_dataAlignment - In the implementation block
@property (assign,nonatomic) char isEqualWidth;                                      //@synthesize isEqualWidth=_isEqualWidth - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setColumnAlignment:(int)arg1 ;
-(void)setDataAlignment:(int)arg1 ;
-(void)setIsEqualWidth:(char)arg1 ;
-(int)columnAlignment;
-(int)dataAlignment;
-(char)isEqualWidth;
-(char)hasColumnAlignment;
-(char)hasDataAlignment;
-(char)hasIsEqualWidth;
@end

