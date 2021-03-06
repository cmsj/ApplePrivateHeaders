/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/ISConcreteIcon.h>

@class NSArray, ISIcon, ISImageStyleDescriptor;

@interface ISDecoratedIcon : ISConcreteIcon {

	NSArray* _decorations;
	ISIcon* _icon;
	ISImageStyleDescriptor* _styleDescriptor;

}

@property (readonly) ISIcon * icon;                                         //@synthesize icon=_icon - In the implementation block
@property (readonly) NSArray * decorations; 
@property (readonly) ISImageStyleDescriptor * styleDescriptor;              //@synthesize styleDescriptor=_styleDescriptor - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithIcon:(id)arg1 decorations:(id)arg2 ;
-(id)initWithIcon:(id)arg1 decorations:(id)arg2 styleDescriptor:(id)arg3 ;
-(id)makeResourceProvider;
-(ISImageStyleDescriptor *)styleDescriptor;
-(id)iconWithDecorations:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)decorations;
-(id)symbol;
-(ISIcon *)icon;
@end

