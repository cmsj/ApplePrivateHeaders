/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@class NSData;

@interface DEHmac : NSObject <DEWriter> {

	NSData* _hmac;
	SCD_Struct_DE2 _context;

}

@property (assign,nonatomic) SCD_Struct_DE2 context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSData * hmac;                       //@synthesize hmac=_hmac - In the implementation block
+(char)verify:(id)arg1 computed:(id)arg2 ;
-(void)close;
-(void)writeData:(id)arg1 ;
-(SCD_Struct_DE2)context;
-(void)setContext:(SCD_Struct_DE2)arg1 ;
-(NSData *)hmac;
-(void)setHmac:(NSData *)arg1 ;
-(id)initWithKey:(id)arg1 iv:(id)arg2 ;
@end

