//
//  BWAddIngredient.h
//  Brewseph
//
//  Created by John Wold on 12/14/14.
//  Copyright (c) 2014 Brewseph World Industries. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"

@interface BWAddIngredientViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>

@property (strong, nonatomic) IBOutlet UIPickerView *ouncesPicker;
@property (strong, nonatomic) IBOutlet UINavigationItem *addIngredientTitle;
@property (strong, nonatomic) Recipe *recipe;
@property (strong, nonatomic) NSString *type;


@end
