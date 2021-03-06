/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSArray;

@interface NFTLV : NSObject {

	unsigned _tag;
	NSData* _value;
	NSArray* _children;

}

@property (nonatomic,readonly) unsigned tag; 
@property (nonatomic,readonly) NSData * value; 
@property (nonatomic,readonly) NSArray * children; 
+(id)_parseTLVs:(const char**)arg1 end:(const char*)arg2 simple:(char)arg3 definite:(char)arg4 ;
+(id)_intToData:(unsigned)arg1 ;
+(id)TLVsWithData:(id)arg1 requireDefiniteEncoding:(char)arg2 ;
+(id)TLVWithData:(id)arg1 ;
+(id)TLVsWithData:(id)arg1 ;
+(id)simpleTLVsWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)simpleTLVsWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 value:(id)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 children:(id)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedChar:(unsigned char)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)TLVSsWithBytes:(const void*)arg1 length:(unsigned long long)arg2 requireDefiniteEncoding:(char)arg3 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedLongValue:(unsigned)arg2 ;
-(unsigned long long)valueAsUnsignedLongLong;
-(id)description;
-(NSData *)value;
-(NSArray *)children;
-(unsigned)tag;
-(id)asData;
-(id)valueAsString;
-(id)childWithTag:(unsigned)arg1 ;
-(id)childrenWithTag:(unsigned)arg1 ;
-(unsigned short)valueAsUnsignedShort;
-(unsigned)valueAsUnsignedLong;
-(id)asMutableData;
-(id)valueAsHexString;
@end

