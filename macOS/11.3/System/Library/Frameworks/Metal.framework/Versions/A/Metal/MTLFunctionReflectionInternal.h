/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLFunctionReflection.h>

@class NSArray, NSData;

@interface MTLFunctionReflectionInternal : MTLFunctionReflection {

	NSArray* _builtInArguments;
	NSArray* _arguments;
	NSData* _pluginReturnData;

}
-(id)initWithArguments:(id*)arg1 argumentCount:(unsigned)arg2 builtInArgumentCount:(unsigned)arg3 pluginReturnData:(id)arg4 ;
-(id)pluginReturnData;
-(void)dealloc;
-(id)arguments;
-(id)builtInArguments;
-(id)initWithDevice:(id)arg1 reflectionData:(id)arg2 functionType:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
@end
