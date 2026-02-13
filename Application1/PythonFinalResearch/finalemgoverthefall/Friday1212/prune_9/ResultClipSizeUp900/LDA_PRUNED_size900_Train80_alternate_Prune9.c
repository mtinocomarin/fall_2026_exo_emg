// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.86%
// test_accuracy: 71.69%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 15:50:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.864315, 0.864326,
    -0.151242, 0.151244,
    0.732213, -0.732230,
    0.541003, -0.540999,
    1.048880, -1.048746,
    -0.924280, 0.924065,
    -0.198764, 0.198843,
    -0.003004, 0.003015,
    -0.637749, 0.637703,
    0.537632, -0.537636,
    -0.368741, 0.368749,
    0.094829, -0.094840,
};

float Cg_init[2] = {
    -0.374935, -0.374929
};

float xstd_init[12] = {
    0.003248, 0.001271, 0.102418, 0.167055, 0.001270, 0.000352, 0.018463, 0.066949, 0.001562, 0.000085, 0.014754, 0.065972
};

float xmean_init[12] = {
    0.009598, -0.006288, 0.176232, 0.589412, 0.003070, -0.007772, 0.004535, 0.048235, 0.003220, -0.007812, 0.003683, 0.065167
};

