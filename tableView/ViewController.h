//
//  ViewController.h
//  tableView
//
//  Created by Andrey Kowalsky on 15.10.15.
//  Copyright © 2015 Andrey Kowalsky. All rights reserved.
//

#import <UIKit/UIKit.h>
//
@interface ViewController : UIViewController <UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tableView;


@end

