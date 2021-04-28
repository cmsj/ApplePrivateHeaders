/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSTextLocation;
@interface NSTextRange : NSObject {

	id<NSTextLocation> _location;
	id<NSTextLocation> _endLocation;

}

@property (getter=isEmpty,readonly) char empty; 
@property (readonly) id<NSTextLocation> location;                 //@synthesize location=_location - In the implementation block
@property (readonly) id<NSTextLocation> endLocation;              //@synthesize endLocation=_endLocation - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(char)isEmpty;
-(id<NSTextLocation>)location;
-(id<NSTextLocation>)endLocation;
-(id)initWithLocation:(id)arg1 ;
-(id)initWithLocation:(id)arg1 endLocation:(id)arg2 ;
-(char)intersectsWithTextRange:(id)arg1 ;
-(id)textRangeByIntersectingWithTextRange:(id)arg1 ;
-(char)containsLocation:(id)arg1 ;
-(id)terminator;
-(char)containsRange:(id)arg1 ;
-(id)textRangeByFormingUnionWithTextRange:(id)arg1 ;
-(id)shortDescription;
-(char)isEqualToTextRange:(id)arg1 ;
@end
