/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CPLDerivativesFilter : NSObject <NSSecureCoding> {

	char _dropForImages;
	char _dropForVideos;

}
+(char)supportsSecureCoding;
+(id)dropDerivativesForImages:(char)arg1 videos:(char)arg2 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initDroppingDerivativesForImages:(char)arg1 videos:(char)arg2 ;
-(char)mightDropSomeDerivativesForSourceType:(unsigned long long)arg1 isVideo:(char)arg2 ;
-(char)shouldDropDerivativeOfType:(unsigned long long)arg1 fromSourceType:(unsigned long long)arg2 isVideo:(char)arg3 ;
@end

