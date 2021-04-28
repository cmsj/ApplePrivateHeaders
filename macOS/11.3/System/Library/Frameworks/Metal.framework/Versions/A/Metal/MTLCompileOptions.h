/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray;

@interface MTLCompileOptions : NSObject <NSCopying>

@property (assign,nonatomic) char tracingEnabled; 
@property (assign,nonatomic) char framebufferReadEnabled; 
@property (assign,nonatomic) char debuggingEnabled; 
@property (assign,nonatomic) char compileTimeStatisticsEnabled; 
@property (assign,nonatomic) NSString * additionalCompilerArguments; 
@property (assign,nonatomic) unsigned char sourceLanguage; 
@property (nonatomic,copy) NSDictionary * preprocessorMacros; 
@property (assign,nonatomic) char fastMathEnabled; 
@property (assign,nonatomic) unsigned long long languageVersion; 
@property (assign,nonatomic) long long libraryType; 
@property (nonatomic,copy) NSString * installName; 
@property (nonatomic,copy) NSArray * libraries; 
@property (assign,nonatomic) char preserveInvariance; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
