/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DProjector.h>

@interface TSCH3DLineProjector : TSCH3DProjector {

	line<glm::detail::tvec3<float>> _line;

}

@property (assign,nonatomic) line<glm::detail::tvec3<float>> line;              //@synthesize line=_line - In the implementation block
-(line<glm::detail::tvec3<float>>)line;
-(void)setLine:(line<glm::detail::tvec3<float>>)arg1 ;
-(char)projectPoint:(const tvec2<float>*)arg1 returningPoint:(tvec3<float>*)arg2 ;
@end

