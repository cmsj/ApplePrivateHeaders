/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class NSString;

@interface TSCH3DCachedLabelBounds : NSObject {

	tvec2<float> _offset2D;
	NSString* _string;
	tvec3<float> _position;
	box<glm::detail::tvec2<float>> _labelBox;

}

@property (nonatomic,readonly) tvec3<float> position;                                //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) box<glm::detail::tvec2<float>> labelBox;              //@synthesize labelBox=_labelBox - In the implementation block
@property (nonatomic,readonly) tvec2<float> offset2D;                                //@synthesize offset2D=_offset2D - In the implementation block
@property (nonatomic,copy,readonly) NSString * string;                               //@synthesize string=_string - In the implementation block
+(id)boundsWithPosition:(tvec3<float>)arg1 labelBox:(box<glm::detail::tvec2<float>>)arg2 offset2D:(tvec2<float>)arg3 string:(id)arg4 ;
-(NSString *)string;
-(tvec3<float>)position;
-(tvec2<float>)offset2D;
-(id)initWithPosition:(tvec3<float>)arg1 labelBox:(box<glm::detail::tvec2<float>>)arg2 offset2D:(tvec2<float>)arg3 string:(id)arg4 ;
-(box<glm::detail::tvec3<float>>)normalizedBoundsWithOffset:(tvec3<float>)arg1 transforms:(id)arg2 viewport:(box<glm::detail::tvec2<int>>)arg3 ;
-(box<glm::detail::tvec2<float>>)labelBox;
@end

