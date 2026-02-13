// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 66.88%
// test_accuracy: 54.41%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-17 13:44:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.295839, 0.295702,
    0.175091, -0.174748,
    -0.076120, 0.076088,
    -0.053922, 0.053728,
    -0.185111, 0.185189,
    -0.253950, 0.253924,
    -0.115791, 0.115763,
    0.277221, -0.277230,
    -0.359759, 0.359819,
    0.184188, -0.184325,
    0.038522, -0.038469,
    0.094046, -0.094022,
};

float Cg_init[2] = {
    -0.109207, -0.109193
};

float xstd_init[12] = {
    0.001034, 0.000083, 0.013265, 0.081346, 0.003128, 0.000848, 0.091177, 0.182274, 0.000857, 0.000112, 0.019933, 0.076112
};

float xmean_init[12] = {
    0.006534, -0.007685, 0.005432, 0.146057, 0.008575, -0.006856, 0.104721, 0.437909, 0.004309, -0.007717, 0.010980, 0.126580
};

