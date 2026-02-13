// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_8\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.88%
// test_accuracy: 73.21%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:02:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.108365, -0.108382,
    -0.269351, 0.269347,
    0.023819, -0.023810,
    -0.067198, 0.067190,
    1.837233, -1.837013,
    -1.580686, 1.580382,
    -0.222643, 0.222691,
    0.146474, -0.146417,
    -0.477437, 0.477369,
    -0.836978, 0.837065,
    0.257861, -0.257902,
    1.716757, -1.716732,
};

float Cg_init[2] = {
    -0.664267, -0.664206
};

float xstd_init[12] = {
    0.000894, 0.000078, 0.007257, 0.067703, 0.000741, 0.000125, 0.015627, 0.058109, 0.003386, 0.000985, 0.114821, 0.206507
};

float xmean_init[12] = {
    0.005559, -0.007759, 0.001587, 0.091191, 0.002404, -0.007847, 0.005238, 0.051548, 0.009012, -0.006640, 0.131746, 0.465834
};

