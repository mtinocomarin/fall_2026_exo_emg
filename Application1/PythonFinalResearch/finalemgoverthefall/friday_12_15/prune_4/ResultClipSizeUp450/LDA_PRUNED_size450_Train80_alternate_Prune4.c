// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.71%
// test_accuracy: 78.12%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 12:41:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.958221, 0.958231,
    0.220258, -0.220254,
    0.102182, -0.102209,
    0.925499, -0.925479,
    -0.440346, 0.440330,
    0.114874, -0.114850,
    0.012721, -0.012720,
    -0.080862, 0.080849,
    0.218887, -0.218891,
    -0.055719, 0.055715,
    -0.594949, 0.594963,
    0.106952, -0.106963,
};

float Cg_init[2] = {
    -0.334896, -0.334897
};

float xstd_init[12] = {
    0.004602, 0.002040, 0.146554, 0.203916, 0.001268, 0.000223, 0.032626, 0.092819, 0.000680, 0.000169, 0.030532, 0.104439
};

float xmean_init[12] = {
    0.010578, -0.005644, 0.239822, 0.677232, 0.003473, -0.007745, 0.011190, 0.081964, 0.003528, -0.007732, 0.013095, 0.115893
};

