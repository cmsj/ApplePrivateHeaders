/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INParameter, INImage;

@interface INParameterImage : NSObject <NSCopying> {

	INParameter* _parameter;
	INImage* _image;

}

@property (copy,readonly) INParameter * parameter;              //@synthesize parameter=_parameter - In the implementation block
@property (copy,readonly) INImage * image;                      //@synthesize image=_image - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(INImage *)image;
-(id)initWithParameter:(id)arg1 image:(id)arg2 ;
-(INParameter *)parameter;
@end

