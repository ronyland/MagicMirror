//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVGElement.h"

@class NSSet, SVGColor, SVGGradient;

@interface _SVGFill : SVGElement
{
    SVGGradient *_gradient;
    NSSet *_usedBy;
    SVGColor *_color;
}

+ (id)attributeNames;
+ (id)propertyNames;
+ (id)relationshipNames;

- (void)addUsedByObject:(id)arg1;
@property(retain, nonatomic) SVGColor *color; // @synthesize color=_color;
@property(retain, nonatomic) SVGGradient *gradient; // @synthesize gradient=_gradient;
- (void)primitiveAddUsedByObject:(id)arg1;
- (void)primitiveRemoveUsedByObject:(id)arg1;
- (void)primitiveSetGradient:(id)arg1;
- (void)removeUsedByObject:(id)arg1;
@property(retain, nonatomic) NSSet *usedBy; // @synthesize usedBy=_usedBy;

@end

