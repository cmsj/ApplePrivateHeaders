/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString;

@interface _MKMultiPartLabelCacheKey : NSObject <NSCopying> {

	NSAttributedString* _attributedString;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) CGSize size;                                             //@synthesize size=_size - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 size:(CGSize)arg2 ;
@end

