/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _CLLSLHeadingEstimation : NSObject <NSCopying, NSSecureCoding> {

	int _status;
	NSArray* _headings;

}

@property (assign,nonatomic) int status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSArray * headings;              //@synthesize headings=_headings - In the implementation block
+(char)supportsSecureCoding;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setHeadings:(NSArray *)arg1 ;
-(NSArray *)headings;
@end

