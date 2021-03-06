/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Security.framework/Versions/A/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Security/Security-Structs.h>
@class NSData;

@interface CTKClientSEP_SEParameters : NSObject {

	aks_params_sRef _params;
	NSData* _encoded;

}

@property (copy,readonly) NSData * data; 
@property (readonly) const void* bytes; 
@property (readonly) unsigned long long length; 
-(void)dealloc;
-(id)description;
-(id)init;
-(unsigned long long)length;
-(const void*)bytes;
-(NSData *)data;
-(void)setData:(id)arg1 forKey:(unsigned)arg2 ;
-(id)initWithParameters:(id)arg1 ;
-(void)setNumber:(long long)arg1 forKey:(unsigned)arg2 ;
@end

