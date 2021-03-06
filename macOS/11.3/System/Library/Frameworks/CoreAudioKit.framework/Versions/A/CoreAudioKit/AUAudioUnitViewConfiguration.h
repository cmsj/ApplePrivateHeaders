/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding> {

	char _hostHasController;
	double _width;
	double _height;

}

@property (readonly) double width;                        //@synthesize width=_width - In the implementation block
@property (readonly) double height;                       //@synthesize height=_height - In the implementation block
@property (readonly) char hostHasController;              //@synthesize hostHasController=_hostHasController - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)width;
-(double)height;
-(char)hostHasController;
-(id)initWithWidth:(double)arg1 height:(double)arg2 hostHasController:(char)arg3 ;
@end

