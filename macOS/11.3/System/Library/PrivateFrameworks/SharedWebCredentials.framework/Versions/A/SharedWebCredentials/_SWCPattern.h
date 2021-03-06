/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/Versions/A/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>

@class NSString;

@interface _SWCPattern : NSObject <SWCRedactedDescription> {

	char _freeWhenDone;
	const SWCPatternStorage* _storage;

}

@property (assign,nonatomic) const SWCPatternStorage* storage;                 //@synthesize storage=_storage - In the implementation block
@property (getter=isBlocking,readonly) char blocking; 
@property (getter=isCaseSensitive,readonly) char caseSensitive; 
@property (getter=isPercentEncoded,readonly) char percentEncoded; 
@property (readonly) NSString * requiredEntitlement; 
+(id)new;
+(id)_debug:(char)arg1 descriptionOfStorage:(const SWCPatternStorage*)arg2 forObject:(id)arg3 redacted:(char)arg4 ;
+(id)_normalizedURLPath:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)init;
-(const SWCPatternStorage*)storage;
-(id)redactedDescription;
-(void)setStorage:(const SWCPatternStorage*)arg1 ;
-(id)_initWithPatternStorageNoCopy:(const SWCPatternStorage*)arg1 freeWhenDone:(char)arg2 ;
-(id)initWithDictionary:(id)arg1 defaults:(id)arg2 ;
-(id)initWithPathPattern:(id)arg1 defaults:(id)arg2 ;
-(char)isBlocking;
-(char)isCaseSensitive;
-(char)isPercentEncoded;
-(NSString *)requiredEntitlement;
-(unsigned long long)evaluateWithURLComponents:(id)arg1 substitutionVariables:(id)arg2 auditToken:(const SCD_Struct_SW0*)arg3 ;
@end

