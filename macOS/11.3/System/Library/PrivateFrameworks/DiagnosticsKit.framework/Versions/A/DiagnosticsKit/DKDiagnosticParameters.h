/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/Versions/A/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface DKDiagnosticParameters : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _predicates;
	NSDictionary* _specifications;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) NSDictionary * predicates;                  //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,readonly) NSDictionary * specifications;              //@synthesize specifications=_specifications - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                  //@synthesize parameters=_parameters - In the implementation block
+(char)supportsSecureCoding;
+(id)diagnosticParametersWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)parameters;
-(NSDictionary *)predicates;
-(id)_decoderClasses;
-(NSDictionary *)specifications;
@end

